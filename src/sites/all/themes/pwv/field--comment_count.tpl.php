<div class="comment-count">
	<span>
	<?php
  if($variables["element"]["#field_name"] == 'comment_count') {
    $comment_count = $variables["element"]["#object"]->comment_count;
    if($comment_count == 0){
      print '<a href="'. url('node/'.$variables["element"]["#object"]->nid).'/#comments">'.t('@count comment', array('@count'=> $comment_count)) . '</a>';
    }else{
      print '<a href="'. url('node/'.$variables["element"]["#object"]->nid).'/#comments">'. format_plural($comment_count , '1 comment', '@count comments'). '</a>';
    }
  }
  ?>
	</span>
</div>
