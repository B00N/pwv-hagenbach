(function ($) {



  $(function(){

    //portfolio

    $('.view-portfolio .views-row').each(function(){

      $(this).addClass($(this).find('.term-class').html());

    });

    $('#edit-field-portfolio-category-tid-wrapper .form-item .form-item').each(function(){
      $(this).find('a').attr('data-filter', '.'+$(this).attr('id'));

    });

    $('#edit-field-portfolio-category-tid-all').html('<a class="active" data-filter="*" href="/portfolio">All Projects</a>');

    $('#views-exposed-form-portfolio-page .bef-select-as-links .form-item .form-item:last').addClass('last');
    var $container = $('.view-portfolio .view-content');
    // initialize isotope
    $container.isotope({
      // options...
      });

    // filter items when filter link is clicked
    $('#edit-field-portfolio-category-tid-wrapper a').click(function(){
      var selector = $(this).attr('data-filter');
      $('#edit-field-portfolio-category-tid-wrapper a').removeClass('active');
      $(this).addClass('active');
      $container.isotope({
        filter: selector
      });
      return false;
    });

    $('.page-node.node-type-portfolio .panel-col-first').addClass('eight columns alpha');
    $('.page-node.node-type-portfolio .panel-col-last').addClass('eight columns omega');
    $('.view-portfolio .views-field-field-portfolio-image a').append('<span class="lupe"></span>');



    $('.view-latest-projects .jcarousel-skin-default .jcarousel-item .views-field-field-portfolio-image a').append('<span class="lupe medium"></span>');

    // end portfolio

    // events

    $('.view-events .views-row').each(function(){
      $(this).addClass($(this).find('.term-class').html());
    });

    $('#edit-field-event-category-tid-wrapper .form-item .form-item').each(function(){
      $(this).find('a').attr('data-filter', '.'+$(this).attr('id'));
    });

    $('#edit-field-event-category-tid-all').html('<a class="active" data-filter="*" href="/termine">Alle Termine</a>');

    $('#views-exposed-form-events-page .bef-select-as-links .form-item .form-item:last').addClass('last');
    var $eventcontainer = $('.view-events .view-content');
    // initialize isotope
    $eventcontainer.isotope({
      // options...
      });

    // filter items when filter link is clicked
    $('#edit-field-event-category-tid-wrapper a').click(function(){
      var selector = $(this).attr('data-filter');
      $('#edit-field-event-category-tid-wrapper a').removeClass('active');
      $(this).addClass('active');
      $eventcontainer.isotope({
        filter: selector
      });
      return false;
    });

    $('.page-node.node-type-event .panel-col-first').addClass('eight columns alpha');
    $('.page-node.node-type-event .panel-col-last').addClass('eight columns omega');
    $('.view-events .views-field-field-event-image a').append('<span class="lupe"></span>');

    $('.view-latest-projects .jcarousel-skin-default .jcarousel-item .views-field-field-event-image a').append('<span class="lupe medium"></span>');

    // end events

    // main menu for mobile version

    $('#main-menu-select select').change(function(){
      menu_link_value = $(this).val();
      window.location = $(this).val();
    });

  // end main menu for mobile version




  });



})(jQuery);