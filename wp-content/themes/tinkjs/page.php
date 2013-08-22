<?php get_header(); ?>
<?php while ( have_posts() ) : the_post(); ?>
<div class="main-content">
  <div class="container">
    <header class="page-title">
      <h1><?php the_title();?></h1>
    </header>

    <div class="row content">
      <div class="span8">

        <?php endwhile; // end of the loop. ?>
      </div><!-- /.span8 -->

      <div class="span4"/>
    </div> <!-- row content -->
    <div class="row content">
      <div class="span8">
        <?php the_content();?>
      </div>
    </div>
  </div>
</div>
<?php get_footer(); ?>

