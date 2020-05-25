<div class="blog-date-created">
	<?php
  if($variables["element"]["#field_name"] == 'blog_information') {
    $date_created = $variables["element"]["#object"]->created;


    $day = format_date($date_created, 'custom', 'd');
	$month = format_date($date_created, 'custom', 'M');
	$year = format_date($date_created, 'custom', 'Y');
  }
	?>
	<div class="day"><span><?php print $day; ?></span></div>
	<div class="month-year">
		<div class="month"><span><?php print $month; ?></span></div>
		<div class="year"><span><?php print $year; ?></span></div>
	</div>
	<div class="clear"></div>
</div>
